//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICTextView;

@interface ICSharedScrollClampingController : NSObject
{
    long long _scrollClampingTopTextIndex;
    double _scrollClampingTopOffsetFactor;
    long long _scrollClampingStack;
    ICTextView *_textView;
    double _scrollClampingTurnOffDelay;
    double _scrollClampingTopOffsetLineFragmentHeight;
}

@property(nonatomic) double scrollClampingTopOffsetLineFragmentHeight; // @synthesize scrollClampingTopOffsetLineFragmentHeight=_scrollClampingTopOffsetLineFragmentHeight;
@property(readonly, nonatomic) double scrollClampingTurnOffDelay; // @synthesize scrollClampingTurnOffDelay=_scrollClampingTurnOffDelay;
@property(readonly, nonatomic) __weak ICTextView *textView; // @synthesize textView=_textView;
@property(readonly) long long scrollClampingStack; // @synthesize scrollClampingStack=_scrollClampingStack;
@property double scrollClampingTopOffsetFactor; // @synthesize scrollClampingTopOffsetFactor=_scrollClampingTopOffsetFactor;
@property long long scrollClampingTopTextIndex; // @synthesize scrollClampingTopTextIndex=_scrollClampingTopTextIndex;
- (void).cxx_destruct;
- (void)unclampWithMergeUpdates:(_Bool)arg1;
- (void)unclamp;
- (void)clamp;
- (_Bool)isClamped;
- (void)textStorageWillEndEditingNotification:(id)arg1;
- (void)setScrollClampingStack:(long long)arg1;
- (void)mergeRelatedOperationsDidEnd:(id)arg1;
- (void)mergeRelatedOperationsWillBegin:(id)arg1;
- (void)topTextIndex:(unsigned long long *)arg1 topTextOffset:(double *)arg2 topTextFragmentHeight:(double *)arg3;
- (id)clampedYValue;
- (void)dealloc;
- (id)initWithTextView:(id)arg1 listensToMergeNotifications:(_Bool)arg2 clampingTurnOffDelay:(double)arg3;
- (id)initWithTextView:(id)arg1 listensToMergeNotifications:(_Bool)arg2;

@end

