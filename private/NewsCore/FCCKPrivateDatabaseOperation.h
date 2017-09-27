//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKPrivateDatabaseOperation : FCOperation
{
    _Bool _skipPreflight;
    _Bool _handleIdentityLoss;
    FCCKPrivateDatabase *_database;
}

@property(nonatomic) _Bool handleIdentityLoss; // @synthesize handleIdentityLoss=_handleIdentityLoss;
@property(nonatomic) _Bool skipPreflight; // @synthesize skipPreflight=_skipPreflight;
@property(retain, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
- (void).cxx_destruct;
- (void)runChildCKOperation:(id)arg1 destination:(long long)arg2;
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;
- (unsigned long long)maxRetries;
- (_Bool)validateOperation;
- (id)init;

@end

