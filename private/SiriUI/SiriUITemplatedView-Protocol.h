//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/NSObject-Protocol.h>

@class UIView;
@protocol SiriUITemplateView;

@protocol SiriUITemplatedView <NSObject>
@property(readonly, nonatomic) struct UIEdgeInsets templatedContentMargins;
- (void)templateSubviewWantsToBeRemovedFromHierarchy:(UIView<SiriUITemplateView> *)arg1;
- (void)addTemplateSubview:(UIView<SiriUITemplateView> *)arg1;
@end
