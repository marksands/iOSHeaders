//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CCUIControlCenterObserver.h"

@protocol CCUIControlCenterPageContentProviding <CCUIControlCenterObserver>
@property(nonatomic) __weak id <CCUIControlCenterPageContentViewControllerDelegate> delegate;

@optional
@property(readonly, nonatomic) _Bool wantsVisible;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (void)controlCenterDidScrollToThisPage:(_Bool)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
@end

