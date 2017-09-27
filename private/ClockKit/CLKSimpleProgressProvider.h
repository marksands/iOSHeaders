//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ClockKit/CLKProgressProvider.h>

@interface CLKSimpleProgressProvider : CLKProgressProvider
{
    double _progress;
}

+ (_Bool)supportsSecureCoding;
+ (id)simpleProgressProviderWithProgress:(double)arg1;
@property(nonatomic) double progress; // @synthesize progress=_progress;
- (id)JSONObjectRepresentation;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_validate;
- (_Bool)_needsUpdates;
- (double)_progressFractionForNow:(id)arg1;

@end

