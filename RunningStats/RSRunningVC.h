//
//  RSFirstViewController.h
//  RunningStats
//
//  Created by Mr. Who on 12/20/13.
//  Copyright (c) 2013 hk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface RSRunningVC : UIViewController
            <MKMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocation *currLocation;
}

@end
