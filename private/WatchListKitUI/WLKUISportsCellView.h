//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, TVImageElement, WLKUISportsOverlayView, _TVImageView;

@interface WLKUISportsCellView : UIView
{
    _Bool _shouldLayoutImageFirst;
    NSArray *_textRenderers;
    _TVImageView *_imageView;
    _TVImageView *_appImageView;
    TVImageElement *_appImageElement;
    WLKUISportsOverlayView *_overlayView;
    struct CGSize _cellSize;
}

@property(retain, nonatomic) WLKUISportsOverlayView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) TVImageElement *appImageElement; // @synthesize appImageElement=_appImageElement;
@property(retain, nonatomic) _TVImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(copy, nonatomic) NSArray *textRenderers; // @synthesize textRenderers=_textRenderers;
@property(nonatomic) _Bool shouldLayoutImageFirst; // @synthesize shouldLayoutImageFirst=_shouldLayoutImageFirst;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void).cxx_destruct;
- (double)_textHeight;
- (double)_textOffset;
- (double)_imageOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutWithElement:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
