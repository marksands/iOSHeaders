//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCloudRecord.h>

@interface HMDCloudLegacyHomeDataVersion3Record : HMDCloudRecord
{
}

+ (id)legacyModelWithHomeDataV3:(id)arg1;
- (unsigned long long)objectEncoding;
- (void)clearData;
- (void)setData:(id)arg1;
- (id)data;
- (id)recordType;
- (_Bool)encodeObjectChange:(id)arg1;
- (id)extractObjectChange;

@end

