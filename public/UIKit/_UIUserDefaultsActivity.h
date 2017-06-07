//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivity.h>

@class NSArray, UINavigationController, UIViewController, _UIActivityUserDefaults;

__attribute__((visibility("hidden")))
@interface _UIUserDefaultsActivity : UIActivity
{
    NSArray *_availableActivities;
    _UIActivityUserDefaults *_userDefaults;
    UINavigationController *_navigationController;
    UIViewController *_userDefaultsViewController;
}

@property(retain, nonatomic) UIViewController *userDefaultsViewController; // @synthesize userDefaultsViewController=_userDefaultsViewController;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *availableActivities; // @synthesize availableActivities=_availableActivities;
- (void).cxx_destruct;
- (void)_prepareActivityViewControllerIfNeeded;
- (void)_cleanup;
- (void)_settingsViewControllerDidDismiss:(id)arg1;
- (void)activityDidFinish:(_Bool)arg1 items:(id)arg2 error:(id)arg3;
- (id)activityViewController;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithUserDefaults:(id)arg1;

@end
