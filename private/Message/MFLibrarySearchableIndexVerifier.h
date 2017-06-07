//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MFLibrarySearchableIndexVerifierDataSource, OS_os_activity;

@interface MFLibrarySearchableIndexVerifier : NSObject
{
    id <MFLibrarySearchableIndexVerifierDataSource> _dataSource;
    NSObject<OS_os_activity> *_spotlightVerificationActivity;
}

@property(retain, nonatomic) NSObject<OS_os_activity> *spotlightVerificationActivity; // @synthesize spotlightVerificationActivity=_spotlightVerificationActivity;
@property(nonatomic) __weak id <MFLibrarySearchableIndexVerifierDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (unsigned long long)verifyDataSamples;
- (id)_verifySamples:(id)arg1;
- (void)_addFailingSamples:(id)arg1 toResultDictionary:(id)arg2;
- (id)_failingSamples:(id)arg1 tester:(id)arg2;
- (void)_postCorruptSearchableIndexNotificationWithErrorLog:(id)arg1 andState:(unsigned long long)arg2;
- (id)initWithDataSource:(id)arg1;

@end
