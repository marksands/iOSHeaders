//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class CLKTextProvider, NTKColoringLabel;

@interface NTKUpNextHeaderView : UICollectionReusableView
{
    NTKColoringLabel *_label;
    CLKTextProvider *_textProvider;
}

+ (void)initialize;
@property(copy, nonatomic) CLKTextProvider *textProvider; // @synthesize textProvider=_textProvider;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

