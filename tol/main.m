//
//  main.m
//  tol
//
//  Created by Bill Kempthorne on 11-06-07.
//  Copyright 2011 Maxwest Technical Consulting Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "tolAppDelegate.h"

int main(int argc, char *argv[])
{
    int retVal = 0;
    @autoreleasepool {
        retVal = UIApplicationMain(argc, argv, nil, NSStringFromClass([tolAppDelegate class]));
    }
    return retVal;
}
