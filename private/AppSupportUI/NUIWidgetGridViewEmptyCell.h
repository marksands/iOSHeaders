//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AppSupportUI/NUIWidgetGridViewCell-Protocol.h>

@class NUIWidgetGridView;

@interface NUIWidgetGridViewEmptyCell : UIView <NUIWidgetGridViewCell>
{
    NUIWidgetGridView *_gridView;
    double _width;
    unsigned long long _index;
}

- (void).cxx_destruct;
- (CDStruct_a157df34)donatableSpaceAllowRemeasure:(_Bool)arg1;
- (CDStruct_a157df34)donatableSpace;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithWidgetGridView:(id)arg1 item:(id)arg2 index:(unsigned long long)arg3;
@property(readonly, nonatomic) unsigned long long index;

@end

