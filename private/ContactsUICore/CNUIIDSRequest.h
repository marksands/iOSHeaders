//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNUIIDSRequest : NSObject
{
}

+ (id)validHandlesFromHandles:(id)arg1;
+ (id)validateHandles:(id)arg1 forService:(long long)arg2 scheduler:(id)arg3 queryControllerWrapper:(id)arg4;
+ (id)IDSResponseQueue;
+ (id)IDSServiceForService:(long long)arg1;
+ (_Bool)isDestinationAvailable:(id)arg1 givenStatusesByDestination:(id)arg2;
+ (id)resultsForIDSControllerResult:(id)arg1 handlesByDestination:(id)arg2;

@end

