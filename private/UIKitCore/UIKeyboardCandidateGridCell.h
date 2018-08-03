//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UICollectionViewCell.h>

@class NSString, UIImage, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCell : UICollectionViewCell
{
    _Bool _dummy;
    _Bool _usesGroupHeaderAppearance;
    _Bool _shouldShowCandidateNumber;
    _Bool _secondaryCandidateAppearance;
    _Bool _facemarkCategoryAppearance;
    _Bool _emphasizedAppearance;
    _Bool _needsUpdateLabels;
    int _candidatesVisualStyle;
    NSString *_text;
    UIImage *_icon;
    NSString *_alternativeText;
    NSString *_annotationText;
    unsigned long long _candidateNumber;
    unsigned long long _edges;
    double _rowHeight;
    double _rightPadding;
    CDStruct_227bb23d _visualStyling;
    long long _textAlignment;
    double _cellPadding;
    double _minimumWidth;
    UILabel *_textLabel;
    UILabel *_alternativeTextLabel;
    UILabel *_candidateNumberLabel;
    UILabel *_annotationLabel;
    struct CGSize _size;
    struct CGSize _candidateNumberSize;
    struct CGRect _visibleBounds;
}

+ (_Bool)drawsSideBorders;
+ (struct CGColor *)legacy_outlineShadowColorForVisualStyling:(CDStruct_227bb23d)arg1 candidatesVisualStyle:(int)arg2;
+ (struct CGColor *)legacy_outlineColorForVisualStyling:(CDStruct_227bb23d)arg1 candidatesVisualStyle:(int)arg2;
+ (double)widthForCandidate:(id)arg1 candidateNumber:(unsigned long long)arg2 visualStyle:(int)arg3;
+ (struct CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;
+ (_Bool)shouldShowImageForGroupTitle:(id)arg1;
+ (double)rightPaddingForIndex;
+ (id)reuseIdentifier;
@property(nonatomic) _Bool needsUpdateLabels; // @synthesize needsUpdateLabels=_needsUpdateLabels;
@property(retain, nonatomic) UILabel *annotationLabel; // @synthesize annotationLabel=_annotationLabel;
@property(retain, nonatomic) UILabel *candidateNumberLabel; // @synthesize candidateNumberLabel=_candidateNumberLabel;
@property(retain, nonatomic) UILabel *alternativeTextLabel; // @synthesize alternativeTextLabel=_alternativeTextLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(nonatomic) double minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) double cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct CGSize candidateNumberSize; // @synthesize candidateNumberSize=_candidateNumberSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_227bb23d visualStyling; // @synthesize visualStyling=_visualStyling;
@property(nonatomic) double rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) double rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) unsigned long long edges; // @synthesize edges=_edges;
@property(nonatomic) _Bool emphasizedAppearance; // @synthesize emphasizedAppearance=_emphasizedAppearance;
@property(nonatomic) _Bool facemarkCategoryAppearance; // @synthesize facemarkCategoryAppearance=_facemarkCategoryAppearance;
@property(nonatomic) _Bool secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(nonatomic) _Bool shouldShowCandidateNumber; // @synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber;
@property(nonatomic) unsigned long long candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property(copy, nonatomic) NSString *annotationText; // @synthesize annotationText=_annotationText;
@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
@property(copy, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool usesGroupHeaderAppearance; // @synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance;
@property(nonatomic) _Bool dummy; // @synthesize dummy=_dummy;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
@property(readonly, nonatomic) _Bool canShowCandidateNumber;
@property(retain, nonatomic) id secureContents;
- (void)updateGroupHeaderLabelPosition;
- (void)updateLabelColors;
- (void)updateLabels;
- (void)drawBackgroundAndBorders;
- (void)drawRect:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

