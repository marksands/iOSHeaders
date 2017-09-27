//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class TSKSelectionPath, TSWPAttachment, TSWPLayout;

@protocol TSWPLayoutParent
- (Class)repClassForTextLayout:(TSWPLayout *)arg1;
- (id <NSFastEnumeration>)dependentsOfTextLayout:(TSWPLayout *)arg1;
- (struct CGRect)autosizedFrameForTextLayout:(TSWPLayout *)arg1 textSize:(struct CGSize)arg2;
- (struct CGRect)nonAutosizedFrameForTextLayout:(TSWPLayout *)arg1;
- (void)invalidateForAutosizingTextLayout:(TSWPLayout *)arg1;
- (int)verticalAlignmentForTextLayout:(TSWPLayout *)arg1;
- (unsigned int)autosizeFlagsForTextLayout:(TSWPLayout *)arg1;

@optional
- (struct CGRect)adjustRect:(struct CGRect)arg1 forScrollingToSelectionPath:(TSKSelectionPath *)arg2 forZoom:(_Bool)arg3;
- (unsigned long long)pageNumberForAttachment:(TSWPAttachment *)arg1;
- (unsigned long long)pageCountForAttachment:(TSWPAttachment *)arg1;
- (struct CGSize)initialTextSize;
- (int)naturalAlignmentForTextLayout:(TSWPLayout *)arg1;
- (struct CGRect)maskRectForTextLayout:(TSWPLayout *)arg1;
- (_Bool)textLayoutShouldLayoutVertically:(TSWPLayout *)arg1;
- (_Bool)textLayoutShouldWrapAroundExternalDrawables:(TSWPLayout *)arg1;
- (unsigned long long)initialCharIndex;
- (double)maxAutoGrowHeightForTextLayout:(TSWPLayout *)arg1;
- (double)maxAutoGrowWidthForTextLayout:(TSWPLayout *)arg1;
- (id <TSWPStyleProvider>)styleProvider;
@end

