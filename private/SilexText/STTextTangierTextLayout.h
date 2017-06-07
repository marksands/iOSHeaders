//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSWPLayout.h>

@class NSMutableSet;

@interface STTextTangierTextLayout : TSWPLayout
{
    NSMutableSet *_addedChildren;
}

@property(retain, nonatomic) NSMutableSet *addedChildren; // @synthesize addedChildren=_addedChildren;
- (void).cxx_destruct;
- (struct CGSize)maxSize;
- (_Bool)drawableAttachment:(id)arg1 withLayout:(id)arg2 shouldPositionIterativelyInColumn:(id)arg3;
- (void)drawableAttachment:(id)arg1 didFinalizePosition:(struct CGPoint)arg2;
- (void)drawableAttachment:(id)arg1 willStartNewIterationWithIndex:(unsigned long long)arg2;
- (void)startedIterativePositioningProcessForDrawableAttachment:(id)arg1;
- (id)validatedLayoutForAttachedDrawable:(id)arg1;
- (id)attachedLayoutsInLayout:(id)arg1 anchored:(_Bool)arg2;
- (_Bool)pushAscendersIntoColumn;
- (_Bool)alwaysAllowWordSplit;
- (void)invalidateTextLayout;
- (void)invalidate;
- (void)validate;
- (void)addAttachmentLayout:(id)arg1;
- (id)layoutForInlineDrawable:(id)arg1;
- (id)validatedLayoutForAnchoredDrawable:(id)arg1;
- (id)currentAnchoredDrawableLayouts;
- (id)currentInlineDrawableLayouts;
- (struct __CFLocale *)hyphenationLocale;
- (unsigned long long)iterativeAttachmentPositioningMaxPassCount;
- (_Bool)shouldPositionAttachmentsIteratively;
- (double)baselineForLastLine;
- (double)lineHeightGuessForFirstLine;

@end

