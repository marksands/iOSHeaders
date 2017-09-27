//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class UIImageView, UILabel;

@interface _HKReportTableViewCell : UITableViewCell
{
    double _minimumHeight;
    UILabel *_reportLabel;
    UIImageView *_reportImageView;
}

@property(readonly, nonatomic) UIImageView *reportImageView; // @synthesize reportImageView=_reportImageView;
@property(readonly, nonatomic) UILabel *reportLabel; // @synthesize reportLabel=_reportLabel;
@property(readonly, nonatomic) double minimumHeight; // @synthesize minimumHeight=_minimumHeight;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setReportName:(id)arg1 reportImage:(id)arg2;
- (void)_buildCellStructureWithWidth:(double)arg1;
- (id)initWithWidth:(double)arg1 minimumHeight:(double)arg2;

@end

