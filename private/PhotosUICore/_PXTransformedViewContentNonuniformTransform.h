//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosUICore/PXNonuniformTransform.h>

@class UIView;

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform
{
    UIView *_transformedView;
    PXNonuniformTransform *_transform;
}

@property(readonly, nonatomic) PXNonuniformTransform *transform; // @synthesize transform=_transform;
@property(readonly, nonatomic) UIView *transformedView; // @synthesize transformedView=_transformedView;
- (void).cxx_destruct;
- (id)inverseTransform;
- (struct CGAffineTransform)affineTransformForRect:(struct CGRect)arg1 inCoordinateSpace:(id)arg2;
- (id)initWithTransformedView:(id)arg1 transform:(id)arg2;

@end

