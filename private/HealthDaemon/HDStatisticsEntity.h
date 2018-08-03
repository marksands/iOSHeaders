//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthDaemon/HDHealthEntity.h>

@interface HDStatisticsEntity : HDHealthEntity
{
}

+ (id)uniquedColumns;
+ (id)foreignKeys;
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;
+ (long long)protectionClass;
+ (id)ownerEntityReferenceColumn;
+ (Class)ownerEntityClass;
+ (id)databaseTable;
+ (_Bool)enumerateStatisticsForOwner:(id)arg1 transaction:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
+ (_Bool)deleteStatisticsForOwner:(id)arg1 type:(id)arg2 transaction:(id)arg3 error:(id *)arg4;
+ (_Bool)setCalculator:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (_Bool)setStatistics:(id)arg1 forOwner:(id)arg2 anchor:(id)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (id)calculatorForOwner:(id)arg1 type:(id)arg2 anchor:(id *)arg3 transaction:(id)arg4 error:(id *)arg5;
+ (id)statisticsForOwner:(id)arg1 type:(id)arg2 anchor:(id *)arg3 transaction:(id)arg4 error:(id *)arg5;

@end

