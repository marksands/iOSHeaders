//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _SFMailContentProvider;

@protocol _SFMailContentProviderDataSource <NSObject>
- (void)mailContentProvider:(_SFMailContentProvider *)arg1 getWebArchiveDataWithCompletion:(void (^)(NSData *, NSString *, NSError *))arg2;
- (void)mailContentProvider:(_SFMailContentProvider *)arg1 getPDFDataWithCompletionHandler:(void (^)(NSData *, NSString *))arg2;
- (void)mailContentProvider:(_SFMailContentProvider *)arg1 getReaderContentWithCompletionHandler:(void (^)(NSString *))arg2;
- (unsigned long long)availableContentTypeForMailContentProvider:(_SFMailContentProvider *)arg1;
@end

