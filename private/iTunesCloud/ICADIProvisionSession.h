//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ICADIProvisionSession : NSObject
{
    unsigned long long _accountID;
}

- (void)_destroySession;
- (_Bool)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id *)arg3;
- (_Bool)startWithServerActionData:(id)arg1 returningClientData:(id *)arg2 error:(id *)arg3;
- (void)dealloc;
- (id)initWithAccountID:(unsigned long long)arg1;

@end

