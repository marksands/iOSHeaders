//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WLKBulletinStore : NSObject
{
    id <WLKBulletinStoreDelegate> _delegate;
}

@property(nonatomic) __weak id <WLKBulletinStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)removeBulletinsWithCoalescingIDs:(id)arg1;
- (void)addBulletin:(id)arg1;
- (id)bulletinEnumerator;
- (void)removeAllBulletins;
- (id)_readBulletins;
- (void)_writeBulletins:(id)arg1;
- (void)_writePlist:(id)arg1;
- (id)_readPlist;
- (void)_writeData:(id)arg1;
- (id)_readData;
- (id)_path;

@end

