//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DAMailboxGetUpdatesRequest.h"

#import "MFDAMailAccountRequest.h"

@interface _MFDAMessageStoreGetUpdatesRequest : DAMailboxGetUpdatesRequest <MFDAMailAccountRequest>
{
    _Bool _isUserRequested;
}

- (_Bool)mf_alwaysReportFailures;
- (id)deferredOperation;
@property(readonly, nonatomic) _Bool isUserRequested;
@property(readonly, nonatomic) _Bool shouldSend;
- (unsigned long long)generationNumber;
- (id)initRequestForBodyFormat:(int)arg1 withBodySizeLimit:(int)arg2 isUserRequested:(_Bool)arg3;

@end

