//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSLayoutDimension, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@protocol AVKitLayoutItem <NSObject>
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor;
- (NSArray *)avkit_constraintsFromDimensionAnchorsToSize:(struct CGSize)arg1;
- (NSArray *)avkit_constraintsFromCenterAndDimensionAnchorsToCenterAndDimensionAnchorsOfItem:(id <AVKitLayoutItem>)arg1;
- (NSArray *)avkit_constraintsFromEdgeAnchorsToEdgeAnchorsOfItem:(id <AVKitLayoutItem>)arg1;
- (NSArray *)avkit_constraintsFromCenterAnchorsToCenterAnchorsOfItem:(id <AVKitLayoutItem>)arg1;
@end

