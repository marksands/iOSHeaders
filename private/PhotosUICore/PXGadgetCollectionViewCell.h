//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class UIView;

@interface PXGadgetCollectionViewCell : UICollectionViewCell
{
    UIView *_gadgetContentView;
    id <PXGadget> _gadget;
}

+ (Class)_contentViewClass;
@property(retain, nonatomic) id <PXGadget> gadget; // @synthesize gadget=_gadget;
@property(readonly, nonatomic) UIView *gadgetContentView; // @synthesize gadgetContentView=_gadgetContentView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setGadgetContentView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

