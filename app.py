import psycopg2

try:
   
    conn = psycopg2.connect(
    dbname="hydra_db",
    user="postgres",
    password="Bhatt@arya45",  
    host="localhost",
    port="5432"
)
    
    # Cursor banao SQL queries execute karne ke liye
    cursor = conn.cursor()
    print("🚀 Database se dosti (Connection) safal rahi bhai!\n")

    # 2. Pehle check karte hain agar table nahi bani toh bana lete hain
    cursor.execute("""
        CREATE TABLE IF NOT EXISTS cars (
            brand VARCHAR(255),
            model VARCHAR(255),
            year INT
        );
    """)
    conn.commit()

    # 3. Chalo ek mast nayi gaadi insert karte hain
    print("✍️ Database me nayi gaadi ka data daal rahe hain...")
    cursor.execute("""
        INSERT INTO cars (brand, model, year) 
        VALUES ('Tesla', 'Model S', 2026);
    """)
    conn.commit() # Commit karna zaroori hai taaki data save ho jaye
    print("✅ Data successfully insert ho gaya!\n")

    # 4. Ab database se wapas saari gaadiyan fetch (print) karke dekhte hain
    print("📋 Current Cars in Database:")
    cursor.execute("SELECT brand, model, year FROM cars;")
    
    rows = cursor.fetchall()
    for row in rows:
        brand, model, year = row  # <-- Yahan se print() hata kar aise assign karo
        print(f"-> Brand: {brand} | Model: {model} | Year: {year}")

except Exception as e:
    print(f"❌ Arrey yaar, error aa gaya: {e}")

finally:
    # Connection close karna acchi practice hai
    if 'cursor' in locals():
        cursor.close()
    if 'conn' in locals():
        conn.close()
    print("\n🔒 Database connection safely closed.")