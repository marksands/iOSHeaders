//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVBackdropView;

@interface AVBackgroundView : UIView
{
    _Bool _automaticallyDrawsRoundedCorners;
    AVBackdropView *_backdropView;
}

@property(nonatomic) __weak AVBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) _Bool automaticallyDrawsRoundedCorners; // @synthesize automaticallyDrawsRoundedCorners=_automaticallyDrawsRoundedCorners;
- (void).cxx_destruct;
- (_Bool)_isContainedInOverlappingBackgroundView;
- (void)layoutSubviews;
- (void)addSubview:(id)arg1 applyingMaterialStyle:(long long)arg2 tintEffectStyle:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

