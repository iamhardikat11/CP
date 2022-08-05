// A C++ program to find convex hull of a set of points. Refer
// https://www.geeksforgeeks.org/orientation-3-ordered-points/
// for explanation of orientation()
#include <bits/stdc++.h>
using namespace std;

struct Point
{
	int x, y;
};

// To find orientation of ordered triplet (p, q, r).
// The function returns following values
// 0 --> p, q and r are collinear
// 1 --> Clockwise
// 2 --> Counterclockwise
int cnt = 0;

int orientation(Point p, Point q, Point r, set<Point> &z)
{
	int val = (q.y - p.y) * (r.x - q.x) -
			(q.x - p.x) * (r.y - q.y);

	if (val == 0) {
        return 0;
    } // collinear
	return (val > 0)? 1: 2; // clock or counterclock wise
}

// Prints convex hull of a set of n points.
bool pointIsOnLine(Point p, Point q, Point r)
{
    // If (x, y) satisfies the equation of the line
    int val = (q.y - p.y) * (r.x - q.x) -
			(q.x - p.x) * (r.y - q.y);
    if(p.x==r.x) return q.x==p.x;
    if(q==p || q==)
    return val==0;
}
int polygon(vector<Point> hull, Point points[], int n)
{
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        Point a = points[0];
        Point b = points[hull.size()-1];
        if(pointIsOnLine(a,points[i],b)) {
            cnt++; 
            continue;
        }
        for(int i=0;i<hull.size()-1;i++)
        {
            Point p = hull[i];
            Point r = hull[i+1];
            if(pointIsOnLine(p,points[i],r)) {
                cnt++;
                break;
            }
        }
    }
    return cnt;
}
void convexHull(Point points[], int n)
{
    if(n==2) {
        cout << 2 << endl;
        return;
    }

	if (n < 3) return;

	vector<Point> hull;

	// Find the leftmost point
	int l = 0;
	for (int i = 1; i < n; i++)
		if (points[i].x < points[l].x)
			l = i;

	// Start from leftmost point, keep moving counterclockwise
	// until reach the start point again. This loop runs O(h)
	// times where h is number of points in result or output.
	int p = l, q;
    set<Point> z;
	do
	{
		// Add current point to result
		hull.push_back(points[p]);

		// Search for a point 'q' such that orientation(p, q,
		// x) is counterclockwise for all points 'x'. The idea
		// is to keep track of last visited most counterclock-
		// wise point in q. If any point 'i' is more counterclock-
		// wise than q, then update q.
		q = (p+1)%n;
		for (int i = 0; i < n; i++)
		{
		// If i is more counterclockwise than current q, then
		// update q
		if (orientation(points[p], points[i], points[q],z) == 2)
			q = i;
		}

		// Now q is the most counterclockwise with respect to p
		// Set p as q for next iteration, so that q is added to
		// result 'hull'
		p = q;

	} while (p != l); // While we don't come to first point

	// Print Result
    int qw = polygon(hull, points, n);
    cout << qw << endl;
}
// Driver program to test above functions
int main()
{
    int n;
    cin >> n;
	Point points[n];
    for(int i=0;i<n;i++)
    {
        cin >> points[i].x >> points[i].y;
    }
	convexHull(points, n);
	return 0;
}
