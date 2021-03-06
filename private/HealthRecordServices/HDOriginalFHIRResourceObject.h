//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthRecordServices/HDFHIRResourceObject.h>

@class HDHRSOriginInformation;

@interface HDOriginalFHIRResourceObject : HDFHIRResourceObject
{
    HDHRSOriginInformation *_originInformation;
}

+ (_Bool)supportsSecureCoding;
+ (id)resourceObjectWithData:(id)arg1 sourceURL:(id)arg2 FHIRVersion:(id)arg3 receivedDate:(id)arg4 extractionHints:(unsigned long long)arg5 originVersion:(CDStruct_f6aba300)arg6 originBuild:(id)arg7 error:(id *)arg8;
@property(readonly, copy, nonatomic) HDHRSOriginInformation *originInformation; // @synthesize originInformation=_originInformation;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)_initWithResourceIdentifier:(id)arg1 JSONObject:(id)arg2 sourceURL:(id)arg3 FHIRVersion:(id)arg4 receivedDate:(id)arg5 extractionHints:(unsigned long long)arg6 originInformation:(id)arg7;

@end

