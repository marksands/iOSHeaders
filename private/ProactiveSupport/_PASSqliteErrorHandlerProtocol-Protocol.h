//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveSupport/NSObject-Protocol.h>

@class NSError, _PASSqliteDatabase;

@protocol _PASSqliteErrorHandlerProtocol <NSObject>
- (_Bool)handleSqliteError:(int)arg1 error:(NSError *)arg2 onError:(struct _PASDBIterAction_ (^)(NSError *))arg3 db:(_PASSqliteDatabase *)arg4;
@end

