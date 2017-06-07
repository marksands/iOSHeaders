//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDContainerLayout.h>

#import <SilexText/TSWPColumnMetrics-Protocol.h>
#import <SilexText/TSWPExteriorTextWrap-Protocol.h>
#import <SilexText/TSWPLayoutParent-Protocol.h>

@class STTextTangierTextWrapper, TSWPPadding;

@interface STTextTangierLayout : TSDContainerLayout <TSWPLayoutParent, TSWPColumnMetrics, TSWPExteriorTextWrap>
{
    STTextTangierTextWrapper *_textWrapper;
}

@property(retain, nonatomic) STTextTangierTextWrapper *textWrapper; // @synthesize textWrapper=_textWrapper;
- (void).cxx_destruct;
- (id)additionalReliedOnLayoutsForTextWrap;
- (id)textWrapperForExteriorWrap;
@property(readonly, nonatomic) struct CGSize adjustedInsets;
- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;
@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;
@property(readonly, nonatomic) unsigned long long columnCount;
@property(readonly, nonatomic) TSWPPadding *layoutMargins;
@property(readonly, nonatomic) _Bool columnsAreLeftToRight;
- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;
@property(readonly, nonatomic) _Bool shrinkTextToFit;
- (void)invalidate;
- (_Bool)shouldHyphenateTextLayout:(id)arg1;
- (struct CGSize)initialTextSize;
- (id)dependentsOfTextLayout:(id)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;
- (void)invalidateForAutosizingTextLayout:(id)arg1;
- (unsigned int)verticalAlignmentForTextLayout:(id)arg1;
- (Class)repClassForTextLayout:(id)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) double textScaleFactor;

@end

