//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TRAccountManager : NSObject
{
}

+ (id)associatedAccountServicesForIDMSAccount:(id)arg1;
+ (id)_idmsAccountForAccountWithUsername:(id)arg1 altDSID:(id)arg2 DSID:(id)arg3;
+ (id)_idmsAccountForGameCenterService;
+ (id)_idmsAccountForITunesService;
+ (id)_idmsAccountForICloudService;
+ (id)_primaryGameCenterAccount;
+ (id)_primaryITunesAccount;
+ (id)_primaryICloudAccount;
+ (id)idmsAccountForAccountService:(unsigned long long)arg1;

@end

