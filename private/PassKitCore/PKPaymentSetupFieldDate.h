//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupFieldText.h>

@class NSDate, NSDateFormatter, NSString;

@interface PKPaymentSetupFieldDate : PKPaymentSetupFieldText
{
    NSDateFormatter *_displayDateFormatter;
    _Bool _showsDay;
    _Bool _showsMonth;
    _Bool _showsYear;
    NSString *_submissionFormat;
}

@property(copy, nonatomic) NSString *submissionFormat; // @synthesize submissionFormat=_submissionFormat;
@property(nonatomic) _Bool showsYear; // @synthesize showsYear=_showsYear;
@property(nonatomic) _Bool showsMonth; // @synthesize showsMonth=_showsMonth;
@property(nonatomic) _Bool showsDay; // @synthesize showsDay=_showsDay;
- (void).cxx_destruct;
- (unsigned long long)fieldType;
- (void)updateWithConfiguration:(id)arg1;
- (id)_locale;
@property(readonly, copy, nonatomic) NSDate *defaultDate;
- (_Bool)submissionStringMeetsAllRequirements;
- (id)_defaultValueAsDateForCurrentLocale;
- (id)submissionString;
- (id)displayString;
@property(copy, nonatomic) NSDate *currentValue; // @dynamic currentValue;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;

@end

