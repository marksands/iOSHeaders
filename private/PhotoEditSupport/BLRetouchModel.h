//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BLRetouchLayerStack, NSDictionary, NSLock;

@interface BLRetouchModel : NSObject
{
    NSDictionary *_strokesDataDictionary;
    BLRetouchLayerStack *_layerStack;
    NSLock *_lock;
}

- (void).cxx_destruct;
- (id)imageForWorkingImageBuffer:(id)arg1 workingTransform:(struct CGAffineTransform)arg2 inDestRect:(struct CGRect)arg3 withPadding:(double)arg4;
- (id)imageForWorkingImage:(id)arg1 workingTransform:(struct CGAffineTransform)arg2 inDestRect:(struct CGRect)arg3 withPadding:(double)arg4;
- (double)paddingForSize:(struct CGSize)arg1;
- (_Bool)needsPadding;
- (_Bool)hasLayerStack;
- (id)layerStack;
- (void)setLayerStack:(id)arg1;
- (void)buildLayerStackWithMaskSourceImage:(id)arg1;
- (_Bool)hasRetouch;
- (id)initWithAdjustmentsDictionary:(id)arg1;

@end

