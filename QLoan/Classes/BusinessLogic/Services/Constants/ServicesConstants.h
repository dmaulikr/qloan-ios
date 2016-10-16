//
//  ServicesConstants.h
//  QLoan
//
//  Created by m.rakhmanov on 16.10.16.
//  Copyright © 2016 Rambler&Co. All rights reserved.
//

#import <Foundation/Foundation.h>

@class QLLenderOrder;
@class QLBorrowerOrder;
@class QLNotification;
@class QLPaymentSchedule;

typedef NS_ENUM(NSUInteger, QLSortMethod){
	QLSortNone = 0,
	QLSortByDate,
	QLSortByDuration,
	QLSortByRating,
	QLSortByPercentage,
	QLSortByAmount
};

typedef void(^QLLenderOrderCompletion)(QLLenderOrder *order, NSError *error);
typedef void(^QLLendersOrderCompletion)(NSArray<QLLenderOrder *> *orders, NSError *error);

typedef void(^QLBorrowerOrderCompletion)(QLBorrowerOrder *order, NSError *error);
typedef void(^QLBorrowersOrderCompletion)(NSArray<QLBorrowerOrder *> *orders, NSError *error);

typedef void(^QLNotificationCompletion)(QLNotification *notification, NSError *error);
typedef void(^QLNotificationsCompletion)(NSArray<QLNotification *> *notifications, NSError *error);

typedef void(^QLPaymentScheduleCompletion)(QLPaymentSchedule *schedule, NSError *error);

typedef void(^QLRatingIncreaseCompletion)(NSInteger increase, NSError *error);

typedef void(^QLBooleanCompletion)(BOOL success, NSError *error);
