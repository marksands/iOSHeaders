//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class STUsageReport, UILabel, UIStackView;

@interface STWeeklyReportAppUsageView : UIView
{
    UILabel *_titleLabel;
    UIStackView *_appImageStackView;
    STUsageReport *_report;
}

@property(retain, nonatomic) STUsageReport *report; // @synthesize report=_report;
@property(retain, nonatomic) UIStackView *appImageStackView; // @synthesize appImageStackView=_appImageStackView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (id)initWithUsageReport:(id)arg1;

@end

