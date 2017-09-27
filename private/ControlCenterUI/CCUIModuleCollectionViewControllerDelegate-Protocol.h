//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CCUIContentModuleContainerViewController, CCUIModuleCollectionViewController, UIView;

@protocol CCUIModuleCollectionViewControllerDelegate <NSObject>
- (UIView *)obscuringBackgroundViewForModuleCollectionViewController:(CCUIModuleCollectionViewController *)arg1;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willRemoveModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didAddModuleContainerViewController:(CCUIContentModuleContainerViewController *)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willCloseExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 willOpenExpandedModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didFinishInteractionWithModule:(id <CCUIContentModule>)arg2;
- (void)moduleCollectionViewController:(CCUIModuleCollectionViewController *)arg1 didBeginInteractionWithModule:(id <CCUIContentModule>)arg2;
- (long long)interfaceOrientationForModuleCollectionViewController:(CCUIModuleCollectionViewController *)arg1;
@end

