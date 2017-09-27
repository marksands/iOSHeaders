//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@interface _WKWebsiteDataStoreConfiguration : NSObject
{
    struct RetainPtr<NSURL> _webStorageDirectoryURL;
    struct RetainPtr<NSURL> _indexedDBDatabaseDirectoryURL;
    struct RetainPtr<NSURL> _webSQLDatabaseDirectoryURL;
    struct RetainPtr<NSURL> _cookieStorageFileURL;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(copy, nonatomic, setter=_setCookieStorageFile:) NSURL *_cookieStorageFile;
@property(copy, nonatomic, setter=_setWebSQLDatabaseDirectory:) NSURL *_webSQLDatabaseDirectory;
@property(copy, nonatomic, setter=_setIndexedDBDatabaseDirectory:) NSURL *_indexedDBDatabaseDirectory;
@property(copy, nonatomic, setter=_setWebStorageDirectory:) NSURL *_webStorageDirectory;

@end

