//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXFeatureSpec.h>

@class PXWidgetSpec;

@interface PXPhotosDetailsAssetsSpec : PXFeatureSpec
{
    _Bool _shouldShowTitle;
    _Bool _enableBadges;
    long long _editorialNumberOfColumns;
    double _editorialInterTileSpacing;
    long long _gridContentMode;
    unsigned long long _detailsOptions;
    PXWidgetSpec *__widgetSpec;
    struct CGSize _gridInterItemSpacing;
    struct CGSize _gridItemSize;
    struct UIEdgeInsets _contentGuideInsets;
    struct UIEdgeInsets _gridContentInsets;
}

+ (struct CGSize)bestItemSizeForAvailableWidth:(double)arg1 screenScale:(double)arg2 bestSpacing:(double *)arg3 bestInset:(double *)arg4;
+ (_Bool)shouldUsePhoneLayoutWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) PXWidgetSpec *_widgetSpec; // @synthesize _widgetSpec=__widgetSpec;
@property(readonly, nonatomic) unsigned long long detailsOptions; // @synthesize detailsOptions=_detailsOptions;
@property(readonly, nonatomic) long long gridContentMode; // @synthesize gridContentMode=_gridContentMode;
@property(readonly, nonatomic) struct CGSize gridItemSize; // @synthesize gridItemSize=_gridItemSize;
@property(readonly, nonatomic) struct UIEdgeInsets gridContentInsets; // @synthesize gridContentInsets=_gridContentInsets;
@property(readonly, nonatomic) struct CGSize gridInterItemSpacing; // @synthesize gridInterItemSpacing=_gridInterItemSpacing;
@property(readonly, nonatomic) _Bool enableBadges; // @synthesize enableBadges=_enableBadges;
@property(readonly, nonatomic) double editorialInterTileSpacing; // @synthesize editorialInterTileSpacing=_editorialInterTileSpacing;
@property(readonly, nonatomic) long long editorialNumberOfColumns; // @synthesize editorialNumberOfColumns=_editorialNumberOfColumns;
@property(readonly, nonatomic) _Bool shouldShowTitle; // @synthesize shouldShowTitle=_shouldShowTitle;
@property(readonly, nonatomic) struct UIEdgeInsets contentGuideInsets; // @synthesize contentGuideInsets=_contentGuideInsets;
- (void).cxx_destruct;
- (void)_computeGridWithExtendedTraitCollection:(id)arg1;
- (void)_computeEditorialWithExtendedTraitCollection:(id)arg1;
- (void)_computeSpecWithExtendedTraitCollection:(id)arg1;
- (double)defaultCornerRadius;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 detailsOptions:(unsigned long long)arg3;
- (id)initWithExtendedTraitCollection:(id)arg1 detailsOptions:(unsigned long long)arg2;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;

@end

