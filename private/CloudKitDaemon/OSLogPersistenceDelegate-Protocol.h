//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSError, OSLogPersistence;

@protocol OSLogPersistenceDelegate <NSObject>
- (void)persistenceDidFinishReadingForStartDate:(NSDate *)arg1 endDate:(NSDate *)arg2;
- (_Bool)persistence:(OSLogPersistence *)arg1 results:(NSArray *)arg2 error:(NSError *)arg3;
@end

