//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SKView.h"

@interface DTSSceneView : SKView
{
    _Bool _shouldDelayLayout;
    _Bool _didDelayLayout;
}

- (void)layoutSubviews;
- (void)_updateLayout;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillEnterForeground;
- (void)_applicationDidEnterBackground;
- (id)initWithFrame:(struct CGRect)arg1;

@end

