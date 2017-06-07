//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface WBSCertificateWarningPageContext : NSObject <NSSecureCoding>
{
    NSString *_expiredCertificateDescription;
    _Bool _canGoBack;
    NSURL *_failingURL;
    long long _warningCategory;
    long long _numberOfDaysInvalid;
    double _clockSkew;
}

+ (_Bool)supportsSecureCoding;
+ (long long)numberOfDaysBetweenCertificateValidityRangeAndNow:(id)arg1;
+ (long long)certificateWarningCategoryForError:(id)arg1 trustIncludesRevokedCertificate:(_Bool)arg2 clockSkew:(double)arg3;
+ (id)permanentAcceptanceConfirmationButtonTitle;
+ (id)permanentAcceptanceConfirmationDescription;
+ (id)permanentAcceptanceConfirmationTitle;
+ (_Bool)certificateWarningCannotBeBypassedForTrust:(struct __SecTrust *)arg1;
@property(readonly, nonatomic) double clockSkew; // @synthesize clockSkew=_clockSkew;
@property(readonly, nonatomic) long long numberOfDaysInvalid; // @synthesize numberOfDaysInvalid=_numberOfDaysInvalid;
@property(readonly, nonatomic) _Bool canGoBack; // @synthesize canGoBack=_canGoBack;
@property(readonly, nonatomic) long long warningCategory; // @synthesize warningCategory=_warningCategory;
@property(readonly, nonatomic) NSURL *failingURL; // @synthesize failingURL=_failingURL;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *expiredCerticateDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithWarningCategory:(long long)arg1 failingURL:(id)arg2 numberOfDaysInvalid:(long long)arg3 canGoBack:(_Bool)arg4 clockSkew:(double)arg5;
- (id)init;

@end

