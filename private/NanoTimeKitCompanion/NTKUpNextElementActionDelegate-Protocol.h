//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSString, NTKUpNextElementAction, UIViewController;

@protocol NTKUpNextElementActionDelegate <NSObject>
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 didFinishTask:(_Bool)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsViewControllerDisplayed:(UIViewController *)arg2;
- (void)upNextElementAction:(NTKUpNextElementAction *)arg1 wantsToPerformTapActionForComplicationSlot:(NSString *)arg2;
@end

