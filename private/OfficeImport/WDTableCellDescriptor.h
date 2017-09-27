//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WDBorder, WDShading;

__attribute__((visibility("hidden")))
@interface WDTableCellDescriptor : NSObject
{
    WDShading *mShading;
    WDBorder *mTopBorder;
    WDBorder *mLeftBorder;
    WDBorder *mBottomBorder;
    WDBorder *mRightBorder;
    WDBorder *mDiagonalUpBorder;
    WDBorder *mDiagonalDownBorder;
    short mWidth;
    int mWidthType;
    short mTopMargin;
    int mTopMarginType;
    short mBottomMargin;
    int mBottomMarginType;
    short mLeftMargin;
    int mLeftMarginType;
    short mRightMargin;
    int mRightMarginType;
    int mVerticalAlignment;
    unsigned int mShadingOverridden:1;
    unsigned int mTopBorderOverridden:1;
    unsigned int mLeftBorderOverridden:1;
    unsigned int mBottomBorderOverridden:1;
    unsigned int mRightBorderOverridden:1;
    unsigned int mDiagonalUpBorderOverridden:1;
    unsigned int mDiagonalDownBorderOverridden:1;
    unsigned int mWidthTypeOverridden:1;
    unsigned int mTopMarginOverridden:1;
    unsigned int mTopMarginTypeOverridden:1;
    unsigned int mBottomMarginOverridden:1;
    unsigned int mBottomMarginTypeOverridden:1;
    unsigned int mLeftMarginOverridden:1;
    unsigned int mLeftMarginTypeOverridden:1;
    unsigned int mRightMarginOverridden:1;
    unsigned int mRightMarginTypeOverridden:1;
    unsigned int mVerticalAlignmentOverridden:1;
    unsigned int mVerticallyMergedCell:1;
    unsigned int mVerticallyMergedCellOverridden:1;
    unsigned int mFirstInSetOfVerticallyMergedCells:1;
    unsigned int mFirstInSetOfVerticallyMergedCellsOverridden:1;
    unsigned int mNoWrap:1;
    unsigned int mNoWrapOverridden:1;
}

- (void)setNoWrapOverridden:(_Bool)arg1;
- (_Bool)isNoWrapOverridden;
- (void)setNoWrap:(_Bool)arg1;
- (_Bool)noWrap;
- (void)setFirstInSetOfVerticallyMergedCellsOverridden:(_Bool)arg1;
- (_Bool)isFirstInSetOfVerticallyMergedCellsOverridden;
- (void)setFirstInSetOfVerticallyMergedCells:(_Bool)arg1;
- (_Bool)firstInSetOfVerticallyMergedCells;
- (void)setVerticallyMergedCellOverridden:(_Bool)arg1;
- (_Bool)isVerticallyMergedCellOverridden;
- (void)setVerticallyMergedCell:(_Bool)arg1;
- (_Bool)verticallyMergedCell;
- (void)setVerticalAlignmentOverridden:(_Bool)arg1;
- (_Bool)isVerticalAlignmentOverridden;
- (void)setVerticalAlignment:(int)arg1;
- (int)verticalAlignment;
- (void)setRightMarginTypeOverridden:(_Bool)arg1;
- (_Bool)isRightMarginTypeOverridden;
- (void)setRightMarginType:(int)arg1;
- (int)rightMarginType;
- (void)setRightMarginOverridden:(_Bool)arg1;
- (_Bool)isRightMarginOverridden;
- (void)setRightMargin:(short)arg1;
- (short)rightMargin;
- (void)setLeftMarginTypeOverridden:(_Bool)arg1;
- (_Bool)isLeftMarginTypeOverridden;
- (void)setLeftMarginType:(int)arg1;
- (int)leftMarginType;
- (void)setLeftMarginOverridden:(_Bool)arg1;
- (_Bool)isLeftMarginOverridden;
- (void)setLeftMargin:(short)arg1;
- (short)leftMargin;
- (void)setBottomMarginTypeOverridden:(_Bool)arg1;
- (_Bool)isBottomMarginTypeOverridden;
- (void)setBottomMarginType:(int)arg1;
- (int)bottomMarginType;
- (void)setBottomMarginOverridden:(_Bool)arg1;
- (_Bool)isBottomMarginOverridden;
- (void)setBottomMargin:(short)arg1;
- (short)bottomMargin;
- (void)setTopMarginTypeOverridden:(_Bool)arg1;
- (_Bool)isTopMarginTypeOverridden;
- (void)setTopMarginType:(int)arg1;
- (int)topMarginType;
- (void)setTopMarginOverridden:(_Bool)arg1;
- (_Bool)isTopMarginOverridden;
- (void)setTopMargin:(short)arg1;
- (short)topMargin;
- (void)setWidthTypeOverridden:(_Bool)arg1;
- (_Bool)isWidthTypeOverridden;
- (void)setWidthType:(int)arg1;
- (int)widthType;
- (void)setWidth:(short)arg1;
- (void)setDiagonalDownBorderOverridden:(_Bool)arg1;
- (_Bool)isDiagonalDownBorderOverridden;
- (void)setDiagonalDownBorder:(id)arg1;
- (id)diagonalDownBorder;
- (void)setDiagonalUpBorderOverridden:(_Bool)arg1;
- (_Bool)isDiagonalUpBorderOverridden;
- (void)setDiagonalUpBorder:(id)arg1;
- (id)diagonalUpBorder;
- (void)setRightBorderOverridden:(_Bool)arg1;
- (_Bool)isRightBorderOverridden;
- (void)setRightBorder:(id)arg1;
- (id)rightBorder;
- (void)setBottomBorderOverridden:(_Bool)arg1;
- (_Bool)isBottomBorderOverridden;
- (void)setBottomBorder:(id)arg1;
- (id)bottomBorder;
- (void)setLeftBorderOverridden:(_Bool)arg1;
- (_Bool)isLeftBorderOverridden;
- (void)setLeftBorder:(id)arg1;
- (id)leftBorder;
- (void)setTopBorderOverridden:(_Bool)arg1;
- (_Bool)isTopBorderOverridden;
- (void)setTopBorder:(id)arg1;
- (id)topBorder;
- (void)setShadingOverridden:(_Bool)arg1;
- (_Bool)isShadingOverridden;
- (void)setShading:(id)arg1;
- (id)shading;

@end

