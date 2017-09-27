//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SKUIClientContext, SKUIColorScheme, SKUIItemOfferButtonAppearance, SKUILayoutCache, SKUIMetricsController, SKUIMetricsImpressionSession, SKUIResourceLoader, SKUIStorePageSectionsViewController, UICollectionView, UIColor;

@interface SKUIStorePageSectionContext : NSObject
{
    SKUIMetricsImpressionSession *_activeMetricsImpressionSession;
    double _activePageWidth;
    UICollectionView *_collectionView;
    SKUIColorScheme *_colorScheme;
    long long _defaultPinningTransitionStyle;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    double _landscapePageWidth;
    SKUIMetricsController *_metricsController;
    SKUIStorePageSectionsViewController *_parentViewController;
    UIColor *_placeholderColor;
    double _portraitPageWidth;
    SKUIResourceLoader *_resourceLoader;
    SKUILayoutCache *_textLayoutCache;
    long long _layoutStyle;
}

@property(readonly, nonatomic) SKUILayoutCache *textLayoutCache; // @synthesize textLayoutCache=_textLayoutCache;
@property(readonly, nonatomic) SKUIResourceLoader *resourceLoader; // @synthesize resourceLoader=_resourceLoader;
@property(readonly, nonatomic) double portraitPageWidth; // @synthesize portraitPageWidth=_portraitPageWidth;
@property(readonly, nonatomic) __weak SKUIStorePageSectionsViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SKUIMetricsController *metricsController; // @synthesize metricsController=_metricsController;
@property(readonly, nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(readonly, nonatomic) double landscapePageWidth; // @synthesize landscapePageWidth=_landscapePageWidth;
@property(readonly, nonatomic) long long defaultPinningTransitionStyle; // @synthesize defaultPinningTransitionStyle=_defaultPinningTransitionStyle;
@property(readonly, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(readonly, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) double activePageWidth; // @synthesize activePageWidth=_activePageWidth;
@property(readonly, nonatomic) SKUIMetricsImpressionSession *activeMetricsImpressionSession; // @synthesize activeMetricsImpressionSession=_activeMetricsImpressionSession;
- (void).cxx_destruct;
- (void)_setTextLayoutCache:(id)arg1;
- (void)_setResourceLoader:(id)arg1;
- (void)_setPortraitPageWidth:(double)arg1;
- (void)_setParentViewController:(id)arg1;
- (void)_setMetricsController:(id)arg1;
- (void)_setLayoutStyle:(long long)arg1;
- (void)_setLandscapePageWidth:(double)arg1;
- (void)_setDefaultPinningTransitionStyle:(long long)arg1;
- (void)_setColorScheme:(id)arg1;
- (void)_setCollectionView:(id)arg1;
- (void)_setActivePageWidth:(double)arg1;
- (void)_setActiveMetricsImpressionSession:(id)arg1;
@property(readonly, nonatomic) UIColor *placeholderColor;
@property(readonly, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance;
@property(readonly, nonatomic) double horizontalPadding;
@property(readonly, nonatomic) SKUIClientContext *clientContext;
- (id)init;

@end

