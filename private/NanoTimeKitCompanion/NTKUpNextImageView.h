//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NTKUpNextBaseCellContentsLayerProvider.h"

@class CALayer, CLKImageProvider, NSString, NTKUpNextBaseCell, UIColor, UIImage, UIImageView;

@interface NTKUpNextImageView : UIView <NTKUpNextBaseCellContentsLayerProvider>
{
    UIImageView *_foregroundImageView;
    UIImageView *_backgroundImageView;
    CALayer *_foregroundAccentBackdrop;
    UIImageView *_foregroundAccentImageView;
    NTKUpNextBaseCell *_parentCell;
    UIColor *_fallbackTintColor;
    CLKImageProvider *_imageProvider;
    UIImage *_overrideImage;
    NSString *_compositingFilter;
}

@property(retain, nonatomic) NSString *compositingFilter; // @synthesize compositingFilter=_compositingFilter;
@property(retain, nonatomic) UIImage *overrideImage; // @synthesize overrideImage=_overrideImage;
@property(retain, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(retain, nonatomic) UIColor *fallbackTintColor; // @synthesize fallbackTintColor=_fallbackTintColor;
- (void).cxx_destruct;
- (void)setContentMode:(long long)arg1;
- (void)_updateColors;
- (_Bool)_hasMultipartImages;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (struct CGRect)contentsLayerBoundsForLayout:(id)arg1;
- (id)contentsLayer;
- (id)initWithFrame:(struct CGRect)arg1 parentCell:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

