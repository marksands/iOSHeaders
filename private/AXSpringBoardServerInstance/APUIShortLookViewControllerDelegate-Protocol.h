//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class APUIShortLookViewController;

@protocol APUIShortLookViewControllerDelegate <NSObject>

@optional
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 willDisplayLongLookWithReason:(long long)arg2;
- (void)shortLookViewControllerWillBeginUserInteraction:(APUIShortLookViewController *)arg1;
@end

