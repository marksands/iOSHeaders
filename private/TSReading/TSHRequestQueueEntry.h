//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURLConnection, NSURLRequest;

@interface TSHRequestQueueEntry : NSObject
{
    NSURLRequest *mRequest;
    NSURLRequest *mDependancy;
    NSURLConnection *mConnection;
    id mDelegate;
}

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setConnection:(id)arg1;
- (id)connection;
- (void)setDependancy:(id)arg1;
- (id)dependancy;
- (void)setRequest:(id)arg1;
- (id)request;
- (void)dealloc;

@end

