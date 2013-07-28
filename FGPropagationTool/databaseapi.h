#ifndef DATABASEAPI_H
#define DATABASEAPI_H

#include <QtSql>

class DatabaseApi
{
public:
    DatabaseApi();
    ~DatabaseApi();



    /**
     * @brief select_mobile_station
     * @param id_session
     */

    void
    select_mobile_station(const unsigned &id_session);


    /**
     * @brief select_ground_stations
     * @param id_session
     */

    void
    select_ground_stations(const unsigned &id_session);

    /**
     * @brief select_flightplan_positions
     * @param id_session
     */

    void
    select_flightplan_positions(const unsigned &id_session);


    /**
     * @brief add_ground_station
     * @param id_session
     * @param lon
     * @param lat
     * @param time
     */

    void
    add_ground_station(const unsigned &id_session,
                                    const double &lon, const double &lat,
                                    const unsigned &time);

    /**
     * @brief add_mobile_station
     * @param id_session
     * @param lon
     * @param lat
     * @param time
     */

    void
    add_mobile_station(const unsigned &id_session,
                                    const double &lon, const double &lat,
                                    const unsigned &time);

    /**
     * @brief add_flightplan_position
     * @param id_session
     * @param lon
     * @param lat
     * @param time
     */

    void
    add_flightplan_position(const unsigned &id_session,
                                    const double &lon, const double &lat,
                                    const unsigned &time);

    /**
     * @brief delete_ground_station
     * @param id_session
     * @param id
     */

    void
    delete_ground_station(const unsigned &id_session, const unsigned &id);

    /**
     * @brief delete_flightplan_position
     * @param id_session
     * @param id
     */

    void
    delete_flightplan_position(const unsigned &id_session, const unsigned &id);

    /**
     * @brief update_ground_station
     * @param id_session
     * @param id
     * @param name
     * @param frequency
     * @param beacon_delay
     * @param transmission_type
     * @param elevation_feet
     * @param heading_deg
     * @param pitch_deg
     * @param polarization
     * @param tx_antenna_height
     * @param tx_antenna_type
     * @param tx_antenna_gain
     * @param tx_line_losses
     * @param tx_power_watt
     * @param rx_antenna_height
     * @param rx_antenna_type
     * @param rx_antenna_gain
     * @param rx_line_losses
     * @param rx_sensitivity
     * @param time
     */


    void
    update_ground_station(const unsigned &id_session, const unsigned &id,
                                       const QString &name, const double &frequency, const short &beacon_delay,
                                       const short &transmission_type, const double &elevation_feet,
                                       const double &heading_deg, const double &pitch_deg,
                                       const short &polarization, const double &tx_antenna_height,
                                       const QString &tx_antenna_type, const double &tx_antenna_gain,
                                       const double &tx_line_losses, const double &tx_power_watt,
                                       const double &rx_antenna_height, const QString &rx_antenna_type,
                                       const double &rx_antenna_gain, const double &rx_line_losses,
                                       const double &rx_sensitivity, const unsigned &time);

    /**
     * @brief update_mobile_station
     * @param id_session
     * @param id
     * @param name
     * @param frequency
     * @param elevation_feet
     * @param heading_deg
     * @param tx_power_watt
     * @param terrain_following
     * @param speed
     * @param time
     */

    void
    update_mobile_station(const unsigned &id_session, const unsigned &id,
                                       const QString &name, const double &frequency, const double &elevation_feet,
                                       const double &heading_deg, const double &tx_power_watt,
                                       const unsigned &terrain_following,
                                       const double &speed, const unsigned &time);

    /**
     * @brief update_flightplan_position
     * @param altitude
     * @param id_session
     * @param id
     */

    void
    update_flightplan_position(const double &altitude, const unsigned &id_session, const unsigned &id);



private:
    QSqlDatabase _db;

};

#endif // DATABASEAPI_H