//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

#import "UITabBarControllerDelegate.h"

@class NSString, UIViewController;

@interface HKTabBarController : UITabBarController <UITabBarControllerDelegate>
{
    UIViewController *_previousViewController;
}

@property(nonatomic) __weak UIViewController *previousViewController; // @synthesize previousViewController=_previousViewController;
- (void).cxx_destruct;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (unsigned long long)tabBarControllerSupportedInterfaceOrientations:(id)arg1;
- (void)setTabBarControlsHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

