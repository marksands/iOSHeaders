//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPassField.h>

@class NSString;

@interface PKPassNumberField : PKPassField
{
    NSString *_currencyCode;
    long long _numberStyle;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long numberStyle; // @synthesize numberStyle=_numberStyle;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
- (void).cxx_destruct;
- (id)value;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
