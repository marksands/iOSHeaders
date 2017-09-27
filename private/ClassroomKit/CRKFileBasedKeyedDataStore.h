//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CRKKeyedDataStoreProtocol.h"

@class NSFileManager, NSString, NSURL;

@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol>
{
    NSURL *mDirectoryURL;
    NSFileManager *mFileManager;
}

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (_Bool)isKeyValid:(id)arg1;
- (_Bool)removeDataForKey:(id)arg1 error:(id *)arg2;
- (id)dataForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)initWithDirectoryURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

